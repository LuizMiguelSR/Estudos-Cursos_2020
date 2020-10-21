<!DOCTYPE html>
<html lang="pt-br">
<head>
    <link rel="stylesheet" href="_css/estilo.css"/>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Multiplicação</title>
</head>
<body>
<div>
    <?php
        //EX02: Escreva um algoritmo que imprima a 
        //multiplicação do números 2,541 e 9,673. Os números 
        //e o resultado apresentados em 10 espaços com apenas 
        //2 casas decimais cada.
        $x = 2.541;
        $y = 9.673;
        $z = $x*$y;
        echo "A multiplicação de $x e $y é igual a ".number_format($z,2);
    ?>
</div>    
</body>
</html>