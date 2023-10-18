#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h> // Biblioteca para uso da função rand
#include <windows.h> 
#include <stdbool.h> // Biblioteca para uso de booleans (true ou false)

void jogo1(){
    // Define o valor das páginas de código UTF8 e default do Windows
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();

    // Define codificação e saída como sendo UTF-8
    SetConsoleOutputCP(CPAGE_UTF8);

    int nivelRio = 100; // Nível inicial do rio
    int populacao = 1000; // População inicial da região
    int pontuacao = 0;
    char jogador [100];
    system("cls");
    printf("     ====================================================================\n");
    printf("             Bem-vindo ao jogo de problemas hídricos em Irecê!\n");
    printf("     ====================================================================\n\n");
    printf("Digite seu nome:");

	scanf("%s",&jogador);

    
    system("pause");
    system("cls");

    printf("=========================================================================================================================================================\n");
    printf("-Olá Sr./sra. %s! Você é o prefeito (a) de Irecê, você está responsável pelo gerenciamento dos recursos hídricos da região. Gerencie com muita sabedoria\n", jogador);
    printf("=========================================================================================================================================================\n");  
    system("pause");
    system("cls");

    while (nivelRio > 0 && nivelRio < 150) {

        printf("\nNível atual do rio: %d\n", nivelRio);
        printf("------------------------\n");
        printf("População atual: %d\n", populacao);
        printf("------------------------\n");
        printf("Escolha uma ação:\n\n");

        printf("----- --------------------------- ----------- ---------------------\n");
        printf("| 1.| |  Construir uma represa  | |custo: 30| |   aumenta o rio   |\n");
        printf("----- --------------------------- ----------- ---------------------\n");
        printf("| 2.| |Implementar racionamento | |ganho: 10| | reduz a população |\n");
        printf("      |         de água         |\n");
        printf("----- --------------------------- ----------- ---------------------\n");
        printf("| 3.| | Construir um tratamento | |ganho: 20| |aumenta a população|\n");
        printf("      |       de esgoto         |\n");
        printf("----- --------------------------- ----------- ---------------------\n");
        printf("| 4.| | Preserve áreas naturais | |ganho: 30| |   aumenta o rio   |\n");
        printf("                                              | aumenta população |\n");
        printf("----- --------------------------- ----------- ---------------------\n");
        printf("| 5.| |   Descarte inadequado   | |custo: 30| | reduz a população |\n");
        printf("----- --------------------------- ----------- ---------------------\n");
        printf("| 6.| |  Monitorar a qualidade  | |ganho: 10| | aumenta população |\n");
        printf("      |         da água         |\n");
        printf("----- --------------------------- ----------- ---------------------\n");
        printf("| 7.| |  Legislação ambiental   | |ganho: 30| | reduz a população |\n");
        printf("----- --------------------------- ----------- ---------------------\n");
        printf("| 8.| | Capitação água de chuva | |ganho: 30| |   aumenta o rio   |\n");
        printf("                                              | aumenta população |\n");
        printf("----- --------------------------- ----------- ---------------------\n");
        printf("| 9.| |  Agricultura consiente  | |ganho: 30| |   aumenta o rio   |\n");
        printf("                                              | reduz a população |\n");
        printf("----- --------------------------- ----------- ---------------------\n");
        printf("|10.| |Campanha  concientização | |ganho: 30| |   aumenta o rio   |\n");
        printf("                                              | aumenta população |\n");
        printf("----- --------------------------- ----------- ---------------------\n");
        printf("| 0.| |    Encerrar o jogo      |\n");
        printf("----- ---------------------------\n");
        
        int escolha;
        scanf("%d", &escolha);
        system("cls");

        switch (escolha) {
            case 1:
                if (nivelRio >= 70) {
                    printf("Você construiu uma represa e aumentou o nível do rio.\n");
                    nivelRio += 20;
                    pontuacao -= 30;
                } else {
                    printf("O nível do rio é muito baixo para construir uma represa.\n");
                }
                break;
            case 2:
                if (populacao >= 100) {
                    printf("Você implementou racionamento de água, ajudou muito o meio ambiente, mas a população não gostou da ideia.\n");
                    pontuacao += 10;
                    populacao -= 100;
                } else {
                    printf("A população é muito baixa para implementar racionamento.\n");
                }
                break;
            case 3:
                if (populacao >= 100) {
                    printf("Implementar um sistema de tratamento de esgoto foi uma ótima ideia, voce contribuiu para o meio ambiente e sua população está feliz .\n");
                    pontuacao += 20;
                    populacao += 100;
                } else {
                    printf("A população é muito baixa para implementar tratamento de esgoto.\n");
                }
                break;
            case 4:
                if (nivelRio >= 100) {
                    printf("Preservar áreas naturais é fundamental para manter os recursos de uma região, parabéns pela iniciativa!\n");
                    pontuacao += 30;
                    populacao += 50;
                    nivelRio += 20;
                } else {
                    printf("O rio está muito baixo, abusaram da natureza, seus esforços nao adiantariam de nada.\n");
                }
                break; 
            case 5:
                if (populacao >= 100) {
                    printf("O que você está fazendo com a nutureza? É assim que quer manter uma cidade? A população está saindo em busca de uma qualidade de vida melhor.\n");
                    pontuacao -= 30;
                    populacao -= 100;
                } else {
                    printf("Tome cuidado para abusar da natureza, o descarte não prejudicaria apenas os recursos hídricos.\n");
                }
                break;
            case 6:
                if (nivelRio >= 70) {
                    printf("Monitorar a qualidade de água é um passo importante para a qualidade de vida das pessoas, eles ficarm muito felizes com sua iniciativa.\n");
                    populacao += 50;
                    pontuacao += 10;
                } else {
                    printf("O nível do rio é muito baixo ele secará logo logo, seus esforços seriam em vão.\n");
                }
                break;
            case 7:
                if (nivelRio >= 100) {
                    printf("Perfeito com uma legislação haveria um controle melhor dos recursos da sua cidade, porém as pessoas nao gostam de ser cobradas...\n");
                    pontuacao += 30;
                    populacao -= 150;
                } else {
                    printf("Desgastaram tanto a cidade que agora você nao tem o que legislar, tome cuidado com sua cidade.\n");
                }
                break;
            case 8:
                if (populacao >= 150) {
                    printf("A populaçao apoiou sua ideia todos estão ajudando.\n");
                    pontuacao += 30;
                    populacao += 100;
                } else {
                    printf("A população é muito baixa para implementar racionamento.\n");
                }
                break;
            case 9:
                if (populacao >= 100) {
                    printf("Muitas pessoas na sua cidade plantam e alguns não gostaram da ideia de terem um cuidado a mais com o solo, pois pensam no lucro.\n");
                    pontuacao += 30;
                    populacao -= 50;
                } else {
                    printf("A população é muito baixa.\n");
                }
                break; 
            case 10:
                if (populacao >= 100) {
                    printf("Muitas pessoas gostaram e estão lhe ajudando nessa campanha, se manterem o ritmo de ajuda e consientização, em pouco tempo sua cidade terá um dos melhores índices de qualidade de vida.\n");
                    pontuacao += 30;
                    populacao += 100;
                } else {
                    printf("Poucas pessoas participaram, isso nao ajudou muito sua cidade.\n");
                }
                break;    
            case 0:
                printf("Jogo encerrado. Sua pontuação final: %d pontos.\n", pontuacao);
                system("pause");
                system("cls");
                return 0;
                
            default:
                printf("Escolha inválida. Tente novamente.\n");        
        }
        system("pause");
        system("cls");
        // Simular a mudança no nível do rio e na população
        nivelRio -= 5;
        populacao += 50;

        // Verificar se o nível do rio chegou a um limite
        if (nivelRio <= 0) {
            printf("O rio secou. Fim de jogo!\n");
            printf("Sua pontuação final: %d pontos.\n", pontuacao);
        } else if (nivelRio >= 100) {
            printf("Inundação! Fim de jogo!\n");
            printf("Sua pontuação final: %d pontos.\n", pontuacao);
        }
    }

    SetConsoleOutputCP(CPAGE_DEFAULT);
}

void jogo2(){

    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();

    
    SetConsoleOutputCP(CPAGE_UTF8);

    int vida = 100; // Nível inicial de água
    int pontuacao = 0;
    char nome [61];
    int poluicao = 50;

    system("cls");
    printf("===================================================================================================================================\n");
    printf("                                                      \n Bem vindo ao jogo ecosistema aquático!\n");
    printf("\n==================================================================================================================================\n");
    printf("\n Digite o seu primeiro nome: ");
    scanf("%s", &nome);
    system("cls");
    printf("=====================================================================================================================================================================\n");
    printf("%s!!! Você é o responsável por manter o ecossistema aquático.\n",nome);
    printf("\n Gerencie o seu ecossistema de forma consciente e responsável.\n");
    printf("Seu objetivo é manter o ecossistema em equilíbrio\n não deixe o nível de poluição chegar a 100 e óbvio, garanta uma boa qualidade de vida para os seres\n");
    printf("=====================================================================================================================================================================\n");
    system("pause");
    system("cls");

    inicio:
    system("cls");
    while (vida > 0 && poluicao < 100 && pontuacao > -50) { 

        printf("\nNível atual de vida aquática: %d\n", vida);
        printf("=================================\n");
        printf("\nNível atual de poluição: %d\n", vida);
        printf("=================================\n");
        printf("\nEscolha uma ação:\n");
        printf("1. Despejo nos rios\n"); // - agua, + 30 esgoto, - 20 pont
        printf("2. Plantação ribeirinha\n"); // + agua, esgoto - 10, pont + 20
        printf("3. Pesca predatória \n"); // agua + 10, - esgoto, - 10 pont
        printf("4. Tratamento de esgoto\n"); // - 10 esgoto, - agua, + 10 pont ||  
        printf("5. Consultar os objetivos\n");
        printf("6. Encerrar o jogo\n");
     

        int escolha;
        scanf("%d", &escolha);
        

        switch (escolha) {
            case 1: system("cls");

                if (vida >= 20) {
                    vida -= 20;
                    poluicao +=30;
                    pontuacao -=20;

                    printf("Você aumentou a poluição na água, por conta do mal descarte de resíduos, acarretando em mais esgoto e menores chances de vida aquática\n");
                } 
                break;
            case 2: system("cls");
                vida += 20;
                pontuacao += 20;
                poluicao -= 10;
                printf("Você contribuiu para a vida aquática e evitou os processos de erosão.\n");
                break;


            case 3: system("cls");
                
                vida -= 10;
                poluicao += 10;
                pontuacao -= 10;

                printf("Você está matando as espécies .\n");
                break;



            case 4: system("cls");

                    vida += 30;
                    poluicao -=30;
                    pontuacao +=30;
                    printf("Você tratou o esgoto da cidade, animais e pessoas que consomem dessa fonte estão em melhores condições graças a sua ação! \n");
                    break;
                
            case 6: system("cls");



                printf("================================================================================================================================================================\n");
                printf("Jogo encerrado.\n Sua pontuação final: %d pontos.\n\n", pontuacao);
                printf("\nOBRIGADO POR JOGAR!\n");
                printf("================================================================================================================================================================\n");
                system("pause");
                system("cls");
                inicio2:
                printf("1. Reiniciar o jogo para as opções.\n");
                printf("2. Terminar o jogo.\n");
                int escolha1;
                scanf("%d", &escolha1);
                
                switch (escolha1)
                {
                case 1: 
                    goto inicio;
                    break;
                
                case 2: 
                    printf("\n\n=====================\n");
                    printf ("\nJOGO FINALIZADO!!\n");
                    printf("\n======================\n");
                    return 0;
                
                default:

                    printf("Escolha inválida. Tente novamente.\n");
                    goto inicio2;
                    break;
                    system("pause");
                    system("cls");    
                }


                case 5: system("cls");
                    printf("\n\n================ SEUS OBJETIVOS ===================\n");
                    printf("1. Não deixar o nível de vida chegar a 0.\n");
                    printf("2. Não deixar o nível de poluição chegar a 100.\n");
                    printf("3. conseguir pontos de acordo com a aprovação dos cidadãos com suas ações.\n");
                     printf("\n\n================================================\n");
                    system ("pause");
                    break;
            default:
                printf("Escolha inválida. Tente novamente.\n");
        }

        // Simular o uso de água pela cidade
        vida -= 10;

        // Verificar se a cidade ficou sem água
        if (vida <= 0) {
            printf("\nO ecossistema ficou sem vida e você foi demitido. Fim de jogo!\n");
            printf("\nSua pontuação final: %d pontos.\n", pontuacao);
            system("pause");
            }
        } if (vida >=100)
            {
            printf("\nA nível de poluição aumentou muito, você foi demitido. Fim de jogo!\n");
            printf("\nSua pontuação final: %d pontos.\n", pontuacao);
            system("pause");
            } 
    

    return 0;

    SetConsoleOutputCP(CPAGE_DEFAULT);

    }
void jogo3(){
	// Define o valor das páginas de código UTF8 e default do Windows
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();

    // Define codificação e saída como sendo UTF-8
    SetConsoleOutputCP(CPAGE_UTF8);

    srand(time(NULL)); // Inicializa a semente para números aleatórios

    int agua = 100; // Nível inicial de água
    int solo = 100; // Qualidade inicial do solo
    int pontuacao = 0;
    char jogador [100];
    system("cls");
    printf("     ====================================================================\n");
    printf("             Bem-vindo ao Simulador de Agricultura Sustentável!\n");
    printf("     ====================================================================\n\n");
    printf("Digite seu nome:");
    scanf("%s",&jogador);
    system("pause");
    system("cls");
    printf("=================================================================================================================================\n");
    printf("-Olá Sr./sra. %s! Você é o(a) dono(a) dessa fazenda, gerencie ela para proteger os recursos hídricos e o solo, essa é a sua missão.\n",jogador);
    printf("=================================================================================================================================\n");  
    system("pause");
    system("cls");

    while (agua > 0 && solo > 0) {
        printf("\nNível atual de água: %d\n", agua);
        printf("Qualidade atual do solo: %d\n\n", solo);
        printf("Escolha uma ação:\n\n");
        printf("1.  Irrigar as plantações \n");
        printf("2.  Uso de fertilizantes ");
        printf("3. Utilizar a técnica de calagem \n");
        printf("4.  Plantar todo ano    n");
        printf("5.  Plantar grãos e cereais     \n");
        printf("6. Plantar raízes \n");
        printf("7. Usar adubos orgânicos    \n");
        printf("0. Encerrar o jogo\n");

        int escolha;
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                if (agua >= 30) {
                    agua -= 30; 
                    solo += 20;
                    printf("Você irrigou sua fazenda houve um grande gasto de água, mas em breve você colherá seus alimentos.\n");
                } else {
                    printf("Você não tem água suficiente para irrigar.\n");
                }
                break;
            case 2:
                if (agua >= 30) {
                    agua -= 30;
                    solo += 20;
                    printf("Você aplicou fertilizantes isso ajudou o solo, mas tome cuidado com o processo de acidificação.\n");
                } else {
                    printf("Essa área já está ácida e inativa para plantação.\n");
                }
                break;
            case 3:
                if (agua >= 10) {
                    agua -= 10;
                    solo += 30;
                    agua += 30;
                    printf("A calagem do solo é um processo de correção tanto do pH como de, neutralização do alumínio e, elevam os teores de cálcio e magnésio do solo .\n");
                } 
                break;
            case 4:
                if (agua >= 40, solo >= 30) {
                    agua -= 40;
                    solo -= 30;
                    solo += 5;
                    agua += 5;
                    printf("O uso continuo do solo sem um descanso é altamente perigoso, cuidado para não esgotar seu solo, tome cuidado! \n");
                } else {
                    printf("Você esgotou os nutrientes do seu solo.\n");
                }
                break;
            case 5:
                if (solo >= 20) {
                    agua -= 20;
                    solo += 40;
                    printf("Você sabia que a melhor escolha para uma plantação que não desgaste tanto o solo, é optar por grãos e cerais? Eles requerem menos nutrientes do solo e alguns, ate ajudam na estabilidade do solo\n");
                } else {
                    printf("Nutrientes insulficintes.\n");
                }
                break;
            case 6:
                if (agua >= 20) {
                    agua -= 20;
                    solo -= 40;

                    printf("Você sabia que as espécies de raízes são mais prejudiciais ao solo?  Por conta da necessidade dos nutrientes, eles requerem mais que outras espécies, assim aabam desgastando o solo com mais facilidade. \n");
                } else {
                    printf("Você esgotou os nutrientes do seu solo.\n");
                }
                break;
            case 7:
                if (agua >= 20) {
                    agua -= 10;
                    solo += 30;

                    printf("Otima escolha o uso de adubos orgânicos sempre será a melhor escolha, parabéns!\n");
                } 
                break; 
            case 0:
                printf("Jogo encerrado. Sua pontuação final: %d pontos.\n", pontuacao);
                return 0;
            default:
                printf("Escolha inválida. Tente novamente.\n");
        }
        system("pause");
        system("cls");


        // Verificar se a fazenda falhou devido à falta de recursos
        if (agua <= 0 || solo <= 0) {
            printf("Sua fazenda não conseguiu manter a sustentabilidade. Fim de jogo!\n");
            printf("Sua pontuação final: %d pontos.\n", pontuacao);
        }
        system("pause");
        system("cls");

        // Aumentar a pontuação a cada rodada
        pontuacao++;
    }

    return 0;
    SetConsoleOutputCP(CPAGE_DEFAULT);
}

void jogo4(){
	UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();

    
    SetConsoleOutputCP(CPAGE_UTF8);

    int agua = 100; // Nível inicial de água
    int pontuacao = 0;
    char nome [61];
    int esgoto = 50;

    system("cls");
    printf("===================================================================================================================================\n");
    printf("                                                      \n Bem vindo ao jogo sustentabilidade hídrica!\n");
    printf("\n==================================================================================================================================\n");
    printf("\n Digite o seu primeiro nome: ");
    scanf("%s", &nome);
    system("cls");
    printf("=====================================================================================================================================================================\n");
    printf("%s!!! Você é o gerente de recursos hídricos de uma cidade.\n",nome);
    printf("\nGerencie a sua cidade de forma consciente e responsável.\n");
    printf("Seu objetivo é manter a cidade abastecida de água\n não deixar o nível de esgoto chegar a 100 e óbvio, garantir uma boa vida para os cidadãos\n");
    printf("=====================================================================================================================================================================\n");
    system("pause");
    system("cls");

    inicio:
    system("cls");
    while (agua > 0 && esgoto < 100 && pontuacao > -50) { 

        

          srand(time(NULL));

        int evento = rand() % 9; //Serve para simular eventos aleatórios que afetam o ecossistema (0, 1, 2, 3 ou 4)

        switch (evento)
        {
        case 0:system("cls");
            printf("================================================ INFORMAÇÕES DE SUSTENTABILIDADE HÍDRICA============================================================================================\n");
            printf("O uso sustentável da água é indispensável para a manutenção da vida humana,\n dos serviços de saneamento básico, das atividades econômicas, da agricultura,\n do segmento industrial e de inúmeras atividades como turismo, lazer e educação, entre outras.\n ");
            printf("\n================================================================================================================================================================\n\n");
            break;

        case 1: system("cls");
            printf("================================================INFORMAÇÕES DE SUSTENTABILIDADE HÍDRICA=========================================================================================================\n");
            printf("tipos de tratamento de esgoto:\nTratamento preliminar: gradeamento, remoção de gorduras e remoção de areia.\nTratamento primário: tratamento preliminar, decantação, digestão do lodo e secagem do lodo.\nTratamento secundário: tratamento primário, tratamento biológico, decantação secundária e desinfecção.\n");

            printf("\n================================================================================================================================================================\n\n");
            break;

        case 2:system("cls");
            printf("================================================ INFORMAÇÕES DE SUSTENTABILIDADE HÍDRICA================================================================================================================\n");
            printf("ALGUMAS DOENÇAS CAUSADAS POR ÁGUA CONTAMINADA:\nAmebíase: O contágio se dá através de água contaminada com cistos provenientes de fezes humanas.\nEsquistossomose: O contágio se dá através do contato direto com água onde há larvas provenientes de caramujos contaminados.\nAscaridíase: O contágio se dá com o consumo de água onde há o parasita Áscaris Lumbricoides.\nGiardíase: O contágio se dá com o consumo de água onde há o parasita Giárdia Lamblya.");
            printf("\n================================================================================================================================================================\n\n");
            break;

        case 3:system("cls");
            printf("================================================ INFORMAÇÕES DE SUSTENTABILIDADE HÍDRICA================================================================================================================\n");
            printf("Podemos fazer o uso de substâncias, como A Cal hidratada ou hidróxido de cálcio que é um produto químico utilizado no tratamento de água para a correção e regulamentação do pH.");
            printf("\n================================================================================================================================================================\n\n");
            break;

        case 4:system("cls");
            printf("================================================ INFORMAÇÕES DE SUSTENTABILIDADE HÍDRICA================================================================================================================\n");
            printf("E para tornarmos o pH da água adequado para consumo, um dos modos mais eficazes é o uso de filtros de água. Pois a água passa por um processo antes de podemos consumi-la, é mais fácil tirar o cloro e outras substâncias que modificam o pH e tornam a água mais ácida. Desse modo é possível assegurar uma água pura e própria para a hidratação adequada do corpo.");
            printf("\n================================================================================================================================================================\n\n");
            break;

        case 5:system("cls");
            printf("================================================ INFORMAÇÕES DE SUSTENTABILIDADE HÍDRICA================================================================================================================\n");
            printf("Para resolver a falta de saneamento básico, é crucial implementar uma abordagem multifacetada que envolve a construção de infraestruturas adequadas, como redes de água e esgoto, o acesso a instalações sanitárias adequadas e o tratamento de resíduos.");
            printf("\n================================================================================================================================================================\n\n");
            break;

        case 6:system("cls");
            printf("================================================ INFORMAÇÕES DE SUSTENTABILIDADE HÍDRICA================================================================================================================\n");
            printf("O uso excessivo de agrotóxicos em Irecê e em outras áreas agrícolas gera poluição do solo e da água, comprometendo a produção agrícola, os ecossistemas locais e a saúde das comunidades.\nComo resultado, a biodiversidade da região está ameaçada, comprometendo a estabilidade e a sustentabilidade dos ecossistemas locais.");
            printf("\n================================================================================================================================================================\n\n");
            break;

        case 7:system("cls");
            printf("================================================ INFORMAÇÕES DE SUSTENTABILIDADE HÍDRICA================================================================================================================\n");
            printf("A qualidade da água é um recurso essencial para a vida e o desenvolvimento sustentável de qualquer região. Em Irecê, na Bahia, não é diferente. A preservação e melhoria da qualidade da água são de extrema importância para garantir o bem-estar da população e a proteção do meio ambiente. ");
            printf("\n================================================================================================================================================================\n\n");
            break;

        case 8:system("cls");
            printf("================================================ INFORMAÇÕES DE SUSTENTABILIDADE HÍDRICA================================================================================================================\n");
            printf("A monocultura é uma prática agrícola que se baseia no cultivo extensivo de uma única espécie de planta em uma determinada região, e na região de Irecê, essa prática tem sido extremamente empregada, com efeitos negativos importantes para o ambiente e a comunidade local. ");
            printf("\n================================================================================================================================================================\n\n");
            break;


        

    
        
        default:
            break;
        }

    

        printf("\nNível atual de água: %d\n", agua);
        printf("=================================\n");
        printf("\nNível atual de esgoto: %d\n", esgoto);
        printf("=================================\n");
        printf("\nEscolha uma ação:\n");
        printf("1. Aumentar o fornecimento de água\n"); // - agua, + 30 esgoto, + 20 pont
        printf("2. Diminuir o fornecimento de água\n"); // + agua, esgoto - 10, pont - 20
        printf("3. Implementar práticas de conservação \n"); // agua + 10, - esgoto, - 10 pont
        printf("4. Tratamento de esgoto\n"); // - 10 esgoto, - agua, + 10 pont ||  
        printf("5. Consultar os objetivos\n");
        printf("6. Encerrar o jogo\n");
     

        int escolha;
        scanf("%d", &escolha);
        

        switch (escolha) {
            case 1: system("cls");

                if (agua >= 20) {
                    agua -= 20;
                    esgoto +=30;
                    pontuacao +=20;

                    printf("Você aumentou o fornecimento de água para a cidade. A população gostou muito, mas acarreta em mais esgoto\n");
                } else {
                    printf("Você não tem água suficiente para aumentar o fornecimento.\n");
                }
                break;
            case 2: system("cls");
                agua += 20;
                pontuacao -= 20;
                esgoto -= 10;
                printf("Você diminuiu o fornecimento de água. O nível de água cresceu, mas algumas pessoas não gostaram!\n");
                break;


            case 3: system("cls");
                
                agua += 10;
                esgoto -= 10;
                pontuacao += 10;

                printf("Você criou campanhas de conscientização do gasto da água e sua preservação.\n Algumas pessoas amaram e outras só acharam chata.\n");
                break;



            case 4: system("cls");

                    agua -= 10;
                    esgoto -=10;
                    pontuacao +=10;
                    printf("Você tratou o esgoto da cidade, a população gostou muito! Porém foi preciso o gasto de água.  \n");
                    break;
                
            case 6: system("cls");



                printf("================================================================================================================================================================\n");
                printf("Jogo encerrado.\n Sua pontuação final: %d pontos.\n\n", pontuacao);
                printf("\nOBRIGADO POR JOGAR!\n");
                printf("================================================================================================================================================================\n");
                system("pause");
                system("cls");
                inicio2:
                printf("1. Reiniciar o jogo para as opções.\n");
                printf("2. Terminar o jogo.\n");
                int escolha1;
                scanf("%d", &escolha1);
                
                switch (escolha1)
                {
                case 1: 
                    goto inicio;
                    break;
                
                case 2: 
                    printf("\n\n=====================\n");
                    printf ("\nJOGO FINALIZADO!!\n");
                    printf("\n======================\n");
                    return 0;
                
                default:

                    printf("Escolha inválida. Tente novamente.\n");
                    goto inicio2;
                    break;
                    system("pause");
                    system("cls");    
                }


                case 5: system("cls");
                    printf("\n\n================ SEUS OBJETIVOS ===================\n");
                    printf("1. Não deixar o nível de água chegar a 0.\n");
                    printf("2. Não deixar o nível de esgoto chegar a 100.\n");
                    printf("3. conseguir pontos de acordo com a aprovação dos cidadãos com suas ações.\n");
                     printf("\n\n================================================\n");
                    system ("pause");
                    break;
            default:
                printf("Escolha inválida. Tente novamente.\n");
        }

        // Simular o uso de água pela cidade
        agua -= 10;

        // Verificar se a cidade ficou sem água
        if (agua <= 0) {
            printf("\nA cidade ficou sem água e você foi demitido. Fim de jogo!\n");
            printf("\nSua pontuação final: %d pontos.\n", pontuacao);
            system("pause");
        }
    } if (esgoto >=100)
    {
            printf("\nA nível de esgoto aumentou muito, você foi demitido. Fim de jogo!\n");
            printf("\nSua pontuação final: %d pontos.\n", pontuacao);
            system("pause");
    } if (pontuacao <= -50)
    {
         printf("\nA população reprovou sua gestão, você foi demitido. Fim de jogo!\n");
            printf("\nSua pontuação final: %d pontos.\n", pontuacao);
            system("pause");
    }
    
    

    return 0;

    SetConsoleOutputCP(CPAGE_DEFAULT);
}


int main(){
	
    // Define o valor das páginas de código UTF8 e default do Windows
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();

    // Define codificação e saída como sendo UTF-8
    SetConsoleOutputCP(CPAGE_UTF8);


	int jogo = -1;
    printf("=============================================================================\n");
	printf("       Seja bem vindo ao menu de joguinhos sustentáveis e educativos. \n");
    printf("=============================================================================\n");
	
	while(jogo!=0){
        system("cls");
		printf("Digite de 1 a 4 para acessar os mini jogos ou digite 0 para finalizar a sessão em joguinhos.\n\n");
        printf("-----  ---------------------------------------\n");
		printf("| 1 |  | Jogo de Problemas hídricos em Irecê!|\n");
        printf("-----  ---------------------------------------\n");
		
        printf("| 2 |  |   Jogo de Agricultura sustentável!  |\n");
        printf("-----  ---------------------------------------\n");
        printf("| 3 |  |  Jogo de Sustentabilidade hídrica!  |\n");
        printf("-----  ---------------------------------------\n");

        scanf("%d", &jogo);
			if(jogo==1)
		        jogo1();
			if(jogo==2)
		        jogo3();
			if(jogo==3)
		        jogo4();
		    if (jogo==0)
		        printf("joguinhos finalizado");
	}

	return 0;

	SetConsoleOutputCP(CPAGE_DEFAULT); //Retorna para padrão o idioma
}