<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <link rel="stylesheet" href="_css/estilo.css"/>
    <title>Estrutura for</title>
</head>
<body>
<div>
    <?php
        $n = isset($_GET["num"])?$_GET["num"]:1;
        for ($c=1; $c<=10; $c++) {
            $r = $n * $c;
            echo "$n X $c = $r</br>";
        }
    ?>
    <br/><a href="02index.php">Voltar</a>
</div>
</body>
</html>