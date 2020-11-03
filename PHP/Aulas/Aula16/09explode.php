<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <link rel="stylesheet" href="_css/estilo.css"/>
    <title>Funções String(explode)</title>
</head>
<body>
<div>
    <?php
        $site = "Curso em Video";
        $vetor = explode(" ",$site);
        print_r($vetor);
    ?>
</div>
</body>
</html>