<!DOCTYPE html>
<html lang="pt-br">
<head>
    <link rel="stylesheet" href="_css/estilo.css"/>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Quilos</title>
</head>
<body>
<div>
    <?php
        //EX03: Um quilo de comida custa R$ 45,00. Faça um 
        //algoritmo que apresente na tela o valor que deve 
        //ser pago por um cliente que comeu 750 gramas.
        $kg = 45.00;
        $cl = 0.750;
        $tt = $kg * $cl;
        echo "O valor pago pelo cliente foi R$ ".number_format($tt,2);
    ?>
</div>    
</body>
</html>