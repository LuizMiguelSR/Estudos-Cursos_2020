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
        $a = isset($_GET["ano"])?$_GET["ano"]:1900;
        $i = date("Y") - $a;
        echo "Você nasceu em $a e terá $i anos.</br>";
        if ($i < 16) {
            $tipovoto = "não vota";
        }
        elseif (($i >= 16 && $i < 18) || ($i > 65)){
            $tipovoto = "voto opcional";
        }
        else {
            $tipovoto = "voto obrigatório";
        }
        echo "Para essa idade, $tipovoto";    
    ?>
</div>
</body>
</html>