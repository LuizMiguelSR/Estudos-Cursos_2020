<!DOCTYPE html>
<html lang="pt-br">
<head>
    <link rel="stylesheet" href="_css/estilo.css"/>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Igual e Idêntico</title>
</head>
<body>
<div>
    <?php
        $a = 3;
        $b = "3";
        $r = ($a === $b) ?"SIM":"NAO";
        echo "As variáveis A e B são idênticos? $r";
    ?>
</div>    
</body>
</html>