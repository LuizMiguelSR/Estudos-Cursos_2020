<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <link rel="stylesheet" href="_css/estilo.css"/>
    <title>Aula_PHP</title>
</head>
<body>
<div>
    <?php
        function soma ($a, $b) {
            $s = $a + $b;
            echo "<p>A soma vale $s</p>";
        }
        soma (3, 4);
        soma (8, 2);
        $x = 9;
        $y = 15;
        soma ($x, $y);
    ?>
</div>
</body>
</html>