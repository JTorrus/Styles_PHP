<?php
    include 'Editor_lib.inc';
    $param = "../css/Estil.css";

    writeContent($param, $_POST["text_estils"]);
    header('Location: Editor.php');
?>
