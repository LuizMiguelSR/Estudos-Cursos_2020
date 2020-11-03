<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <link rel="stylesheet" href="_css/estilo.css"/>
    <title>Funções String(wordcount)</title>
</head>
<body>
<div>
    <?php
        $frase = "Eu vou estudar PHP agora";
        //$cont = str_word_count($frase,0); conta as palavras
        //$cont = str_word_count($frase,1); mostra os vetores
        $cont = str_word_count($frase,2);
        print_r($cont);
        //echo $cont;
    ?>
</div>
</body>
</html>