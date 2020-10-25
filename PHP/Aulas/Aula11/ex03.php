<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <link rel="stylesheet" href="_css/estilo.css"/>
    <title>Exercício 03</title>
</head>
<body>
<div>
    <?php
        $in= isset($_GET["num1"])?$_GET["num1"]:0;
        $en= isset($_GET["num2"])?$_GET["num2"]:0;
        $inc= isset($_GET["n1"])?$_GET["n1"]:0;
        if ($in > $en) {
            while ($in>=$en) {
                echo $in."</br>";
                $in-=$inc;
            }
        } 
        elseif ($in < $en) {
            while ($in<=$en) {
                echo $in."</br>";
                $in+=$inc;
            }
        }
        else {
            echo"ERRO os valores são iguais.";
        }
    ?>
    <br/><a href="ex03.html">Voltar</a>
</div>
</body>
</html>