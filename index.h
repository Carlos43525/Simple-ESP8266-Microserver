const char MAIN_page[] PROGMEM = R"=====(
    <!DOCTYPE html>
<html lang="en">
<html>
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
    <meta http-equiv="refresh" content="60">
    <script type="text/javascript\" src="https://www.gstatic.com/charts/loader.js"></script>
    <script type="text/javascript\">
      google.charts.load'current', {'packages':['gauge']}
      google.charts.setOnLoadCallbackdrawChart
      function drawChart {
        var data = google.visualization.arrayToDataTable[ 
          ['Label', 'Value'], 
          ['Moisture',  
   ], 
         ]   
      var options = {
        width: 400, height: 120,
        redFrom: 0, redTo: 25,
        yellowFrom: 25, yellowTo: 75,
        greenFrom: 75, greenTo: 100,
         minorTicks: 5
      }
     var chart = new google.visualization.Gaugedocument.getElementById'chart_div'
     chart.drawdata, options
     setIntervalfunction {
     data.setValue0, 1, 
      chart.drawdata, options
      }, 13000
  }
  </script>

</head>

<body>


    <h1 style="size:12px;">ESP8266 Soil Moisture</h1>

    // show some data on the webpage and the guage
    <table><tr><td>
  
   WiFi Signal Strength: 
    //WiFiStrength
    dBm<br>
    Analog Raw: 
    <br>Analog Volts: 
    <br><a href="/REFRESH\"><button>Refresh</button></a>
  
    </td><td>
    <div id="chart_div" style="width: 300px; height: 120px;"></div>
    </td></tr></table>
</body>
</html>
)=====";