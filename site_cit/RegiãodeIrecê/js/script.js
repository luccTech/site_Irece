document.getElementById("formulario").addEventListener("submit", function(event) {
    event.preventDefault();

    var nome = document.getElementById("nome").value;
    var email = document.getElementById("email").value;
    var mensagem = document.getElementById("mensagem").value;

    // Enviar os dados do formulário para o backend usando fetch API
    fetch('/enviar-feedback', {
        method: 'POST',
        headers: {
            'Content-Type': 'application/json'
        },
        body: JSON.stringify({
            nome: nome,
            email: email,
            mensagem: mensagem
        })
    })
    .then(response => response.text())
    .then(data => {
        // Exibir a resposta do servidor na página
        document.getElementById("resposta").innerHTML = data;
        // Limpar o formulário
        document.getElementById("formulario").reset();
    })
    .catch(error => {
        console.error('Erro:', error);
    });
});
