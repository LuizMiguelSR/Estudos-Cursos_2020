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
        $d = isset($_GET["ds"])?$_GET["ds"]:0;
        switch ($d) {
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
                echo "Levanta e vai estudadar! :)";
            break;
            case 7:
            case 8:
                echo "Descanse, pequeno gafanhoto! ;)";
            break;
            default:
                echo "Dia da semana inválido";
        }
    ?>
    <br/><a href="ex02.html">Voltar</a>
</div>
</body>
</html>