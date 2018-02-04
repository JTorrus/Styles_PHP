<!doctype html>
<html lang="es">
<head>
    <link rel="stylesheet" href="../css/Estil.css">
    <meta charset="UTF-8">
    <meta name="viewport"
          content="width=device-width, user-scalable=no, initial-scale=1.0, maximum-scale=1.0, minimum-scale=1.0">
    <meta http-equiv="X-UA-Compatible" content="ie=edge">
    <title>Editor</title>
</head>
<body>
    <h1>Testing del h1</h1>

    <form action="Guarda_canvis.php" method="post">
        <textarea name="text_estils" cols="30" rows="10">
            <?php
                include 'Editor_lib.inc';

                $param = "../css/Estil.css";
                showContent($param);
            ?>
        </textarea>
        <br>
        <input type="submit">
    </form>
</body>
</html>