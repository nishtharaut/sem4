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
 <input type="number" name="contact"> 
 <input type="submit" value="Submit" name="submit">
 </form>

<?php
    if($_POST['submit'])
    {
        $name = $_POST['name'];
        $contact = $_POST['contact'];

        //echo "<h4>  $name </h4>";
        //echo "<h4>  $contact </h4>";
        $query = "INSERT INTO form values('$name','$contact')";
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
