<!DOCTYPE html>
<html>
<head>
   <header><center><h1>Details Form PHP</h1></center></header>
   <meta http-equiv="Content-Type">
   </head>
   <body>
   <form method='POST'>
   <h3>Please input your name:</h3>
 <input type="text" name="name">
 <h3>Please input your email:</h3>
 <input type="text" name="email">
 <h3>Please input your contact number:</h3>
 <input type="number" name="contact">
 <input type="submit" value="Submit">
 </form>
<?php
//Retrieve name from query string and store to a local variable
$name = $_POST['name'];
$email = $_POST['email'];
$contact = $_POST['contact'];

echo "<h4>  $name </h4>";
echo "<h4>  $email </h4>";
echo "<h4>  $contact </h4>";
?>
</body>
</html>
