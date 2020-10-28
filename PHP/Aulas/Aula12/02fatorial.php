<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <link rel="stylesheet" href="_css/estilo.css"/>
    <title>Estrutura while no Fim</title>
</head>
<body>
<div>
    <?php
        $v=isset($_GET["val"])?$_GET["val"]:1;
        echo "<h1>Calculando o Fatorial de $v</h1>";
        $c = $v;
        $fat = 1;
        do {
            $fat = $fat * $c;
            $c--;
        } while ($c>=1);
        echo "<h2>$v ! = $fat";
    ?>
    <p><a href="02index.html">Voltar</a></p>
</div>
</body>
</html>