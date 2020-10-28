<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <link rel="stylesheet" href="_css/estilo.css"/>
    <title>Funções</title>
</head>
<body>
<div>
    <?php
        function soma ($a, $b) {
            //$s = $a + $b;  <-- pode ser feito assim
            //return $s;
            return $a + $b;
        }
        $x = 5;
        $y = 4;
        $r = soma ($x, $y);
        echo "A soma entre $x e $y é igual a $r";
    ?>
</div>
</body>
</html>