<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <link rel="stylesheet" href="_css/estilo.css"/>
    <title>Funções String(WordWrap)</title>
</head>
<body>
<div>
    <?php
        $t = "Aqui temos um texto gigante criado pelo php e vai mostrar o funcionamento da função wordwrap";
        $r = wordwrap($t, 20, "<br/>\n");
        echo $r;
    ?>
</div>
</body>
</html>