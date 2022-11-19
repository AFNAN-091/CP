
var buttonclr = document.getElementsByTagName("button")[0];

buttonclr.style.color = "green";
var buttonclr = document.getElementsByTagName("button")[1];
buttonclr.style.fontSize = "1.5rem";
buttonclr = document.getElementsByTagName("p")[0];
buttonclr.style.color = "blue";

function msg(){
    var val = document.querySelector("#pera");
    val.innerHTML = "now i am stronger ";
}

function addpic(){
    var image = document.querySelector("#pic");
    image.src = "image/junior.jpg";
}

function addpic2(){
    var image = document.querySelector("#pic");
    image.src = "image/senior.jpg";
}