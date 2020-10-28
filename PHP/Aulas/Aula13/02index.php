<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <link rel="stylesheet" href="_css/estilo.css"/>
    <title>Estrutura for</title>
</head>
<body>
<div>
    <form method="get" action="02tabuada.php">
        <select name="num">
            <?php
                for ($c=1; $c<=10; $c++) {
                    echo "<option>$c</option>";
                }
            ?>
        </select>
        <input type="submit" value="Tabuada"/>
    </form>
</div>
</body>
</html>