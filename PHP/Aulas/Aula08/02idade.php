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
        $nome = isset ($_GET["nome"])?$_GET["nome"]:"[Não Informado]";
        $ano = isset ($_GET["ano"])?$_GET["ano"]:0;
        $sexo = isset ($_GET["sexo"])?$_GET["sexo"]:"[Sem Sexo]";
        $idade = date("Y") - $ano;
        echo "$nome é $sexo  e tem $idade anos.";
    
    ?>
    <a href="02exercicio.html">Voltar</a>
</div>
</body>
</html>