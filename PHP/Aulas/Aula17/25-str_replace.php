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
        $frase = "Gosto de estudar Matemática! Matemática é muito legal";
        $novafrase = str_ireplace("matemática", "PHP", $frase);
        echo "$novafrase";
    ?>
</div>
</body>
</html>