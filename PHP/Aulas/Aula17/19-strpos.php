<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <link rel="stylesheet" href="_css/estilo.css"/>
    <title>Funções 02</title>
</head>
<body>
<div>
    <?php
        $frase = "Estou aprendendo PHP";
        $pos = stripos($frase, "php");
        echo "$frase <br/>A string foi encontrada na posição $pos";
    ?>
</div>
</body>
</html>