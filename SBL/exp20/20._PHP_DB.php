<?php
    include("connection.php"); 
?>
<!DOCTYPE html>
<html>
<head>
   <header><center><h1>Employee Form PHP</h1></center></header>
   <meta http-equiv="Content-Type">
   </head>
   <body>
   <form method='POST'>
   <h3>Please input your name:</h3>
 <input type="text" name="name">

 <h3>Please input your contact number:</h3>
 <input type="email" name="email"> 
 <input type="submit" value="Submit" name="submit">
 </form>

<?php
    if($_POST['submit'])
    {
        $name = $_POST['name'];
        $email = $_POST['email'];

        //echo "<h4>  $name </h4>";
        //echo "<h4>  $contact </h4>";
        $query = "INSERT INTO form values('$name','$email')";
        $data = mysqli_query($conn,$query); 
        if($data)
        {
            echo "Data inserted in DB"; 
        }
        else
        {
            echo "failed";  
        } 
    }
?>
</body>
</html>
