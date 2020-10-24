<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <link rel="stylesheet" href="_css/estilo.css"/>
    <title>Condições de Múltiplos Casos</title>
</head>
<body>
<div>
    <?php
        $e = isset($_GET["est"])?$_GET["est"]:0;
        switch ($e) {
            case 1:
            case 2:
            case 3:
                echo "Você mora na região Sul";
            break;
            case 4:
            case 5:
            case 6:
            case 7:
                echo "Você mora na região Sudeste";
            break;
            case 8:
            case 9:
            case 10:
            case 11:
                echo "Você mora na região Centro Oesto";
            break;
            case 12:
            case 13:
            case 14:
            case 15:
            case 16:
            case 17:
            case 18:
                echo "Você mora na região Norte";
            break;
            case 19:
            case 20:
            case 21:
            case 22:
            case 23:
            case 24:
            case 25:
            case 26:
            case 27:
                echo "Você mora na região Nordeste";
            break;
            default:
                echo "Opção inválida";
        }
    ?>
    <br/><a href="ex03.html">Voltar</a>
</div>
</body>
</html>