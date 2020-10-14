// Importing http core package/module provided by nodejs

var http = require('http');

var my_functions = require("./functions.js");

// Creating a server
http.createServer(function (req, res) {

// Write response as Html(text)
res.writeHead(200, {'Content-Type': 'text/html'});

res.write(my_functions.echo("ABCDE <br>"));
res.write(my_functions.sum(2,3).toString() + "<br>");

// Writing static text
res.end('Hello World');


// Server listening on port number 4200

}).listen(4200);
