<?php
    include 'Editor_lib.inc';

    writeContent($_POST["text_estils"]);
    header('Location: Editor.php');
?>
