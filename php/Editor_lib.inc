<?php
    function showContent($param) {
        if (is_readable($param)) {
            if (!$file = fopen("$param", "r+")) {
                echo "Hi ha hagut un error amb el fitxer";
                exit;
            }

            echo fread($file, filesize("$param"));
            fclose($file);
        } else {
            echo "L'arxiu no te permissos de lectura";
        }

    }

    function writeContent($param, $elements) {
        if (is_writable($param)) {
            if (!$file = fopen("$param", "w")){
                echo "Hi ha hagut un error amb el fitxer";
                exit;
            }

            if (fwrite($file, $elements) === FALSE) {
                echo "No es pot esciure a l'arxiu";
                exit;
            }

            fclose($file);
        } else {
            echo "L'arxiu no te permissos d'escriptura";
        }

    }
?>