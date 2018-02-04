<?php
    function showContent($param) {
        $file = fopen("$param", "r+") or die ("Hi ha hagut un error amb el fitxer");
        echo fread($file, filesize("$param"));
        fclose($file);
    }

    function writeContent($param, $elements) {
        $file = fopen("../css/Estil.css", "w") or die ("Hi ha hagut un error amb el fitxer");
        fwrite($file, $elements);
        fclose($file);
    }
?>