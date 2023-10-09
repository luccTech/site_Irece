const express = require('express');
const bodyParser = require('body-parser');
const nodemailer = require('nodemailer');

const app = express();
app.use(bodyParser.json());

app.post('/enviar-feedback', (req, res) => {
    const { nome, email, mensagem } = req.body;

    // Configurar o serviço de e-mail usando nodemailer
    let transporter = nodemailer.createTransport({
        service: 'gmail',
        auth: {
            user: 'siteirece@gmail.com',
            pass: 'Lucaslbr2!'
        }
    });

    // Configurar o e-mail a ser enviado
    let mailOptions = {
        from: 'siteirece@gmail.com',
        to: 'siteirece@gmail.com', // Seu endereço de e-mail para receber o feedback
        subject: 'Novo Feedback do Site',
        text: `Nome: ${nome}\nE-mail: ${email}\nMensagem: ${mensagem}`
    };

    // Enviar o e-mail
    transporter.sendMail(mailOptions, (error, info) => {
        if (error) {
            console.log(error);
            res.status(500).send('Erro ao enviar o feedback.');
        } else {
            console.log('E-mail enviado: ' + info.response);
            res.send('Obrigado pelo seu feedback!');
        }
    });
});

const PORT = 3000;
app.listen(PORT, () => {
    console.log(`Servidor rodando na porta ${PORT}`);
});
