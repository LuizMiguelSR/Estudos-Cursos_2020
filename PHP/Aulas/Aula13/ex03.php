<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <link rel="stylesheet" href="_css/estilo.css"/>
    <title>Estrutura for</title>
</head>
<body>
<div>
    <?php
        $num1=isset($_GET["num"])?$_GET["num"]:1;
        for ($c=1;$c<=$num1;$c++) {
            if ($num1%$c==0) {
                $cd++;
            }
        }
        if ($cd > 2) {
            echo "$num1 não é Primo!";
        }
        else {
            echo "$num1 é Primo!";
        }
    ?>
</div>
</body>
</html>