<!DOCTYPE html>
<html>

<head>
    <title>Print User Name and Roll No</title>
</head>

<body>
    <h2>Enter Your Name and Roll No:</h2>
    <form method="post">
        Name: <input type="text" name="name"><br><br>
        Roll No: <input type="text" name="rollno"><br><br>
        <input type="submit" name="submit" value="Submit">
    </form>
    <?php

    if (isset($_POST['submit'])) {   //isset() check karta hy ki submit ka POST request hua hy ya nahi
        $name = $_POST['name'];
        $rollno = $_POST['rollno'];
        echo "<h3>Your Name is: " . $name . "</h3>";
        echo "<h3>Your Roll No is: " . $rollno . "</h3>";
    }

    ?>
</body>

</html>