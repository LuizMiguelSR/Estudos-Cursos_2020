<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <link rel="stylesheet" href="_css/estilo.css"/>
    <title>Estrutura Condicional</title>
</head>
<body>
<div>
    <?php
        $n1 = isset($_GET["nota1"])?$_GET["nota1"]:50;
        $n2 = isset($_GET["nota2"])?$_GET["nota2"]:50;
        $r = ($n1 + $n2)/2;
        if ($r < 5.0) {
            $sit = "REPROVADO";
        }
        elseif ($r >= 5.0 && $r < 7) {
            $sit = "EM RECUPERAÇÃO";
        }
        else {
            $sit = "APROVADO";
        }
        echo "A média entre ".number_format($n1,1)." e ".number_format($n2,1)." é igual a ".number_format($r,1);
        echo "<br/>Portanto você está $sit";    
    ?>
    <br/><a href="exercicio03.html">Voltar</a>
</div>
</body>
</html>