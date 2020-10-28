<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <link rel="stylesheet" href="_css/estilo.css"/>
    <title>Tabuada</title>
</head>
<body>
<div>
    <?php
        $v=isset($_GET["tab"])?$_GET["tab"]:1;
        echo "<h1>A tabuada do $v é...</h1>";
        $c = 1;
        do {
            $t=$v*$c;
            echo "$v X $c = $t</br>";
            $c++;
        } while ($c<=10);
    ?>
    <a href="ex03.html">Voltar</a>
</div>
</body>
</html>