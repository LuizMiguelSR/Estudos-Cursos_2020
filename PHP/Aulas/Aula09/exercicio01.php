<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <link rel="stylesheet" href="_css/estilo.css"/>
    <title>Aula_PHP_ </title>
</head>
<body>
<div>
    <?php
        $a = isset($_GET["ano"])?$_GET["ano"]:1900;
        $i = date("Y") - $a;
        echo "Você nasceu em $a e terá $i anos.</br>";
        if($i >= 18) {
            $v = "Já pode votar";
            $d = "Já pode dirigir.";
        }
        else {
            $v = "não pode votar";
            $d = "não pode dirigir.";
        }
        echo "Com essa idade você $v e também $d";    
    ?>
</div>
</body>
</html>