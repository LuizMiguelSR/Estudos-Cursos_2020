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
        $c = 10;
        do {
            echo "$c ";
            $c--;
        } while ($c>=1);
    ?>
</div>
</body>
</html>