
var arr = ["image/double.jpg","image/single.jpg","image/junior.jpg","image/senior.jpg","image/sky.jpg"];
var pic = document.querySelector("#photo");


//var val = document.getElementsByTagName("h2")[0];

function add1(){
 //  var val = document.getElementsByTagName("h2")[0];
    val.classList.add("design-button");
}

function remove2(){
    //var val = document.getElementsByTagName("h2")[0];
    val.classList.remove("design-button");
}

var cnt = 0;
function previous(){
    var val = document.getElementsByTagName("h2")[0];
    val.classList.remove("design-button");
    val.classList.add("design-button");
    cnt--;
    if(cnt<=0)
    {
        cnt = arr.length-1;
        pic.src = arr[cnt];      
    }
    else{
        pic.src = arr[cnt];     
    }
}


function next(){
    var val = document.getElementsByTagName("h2")[0];
    val.classList.remove("design-button");
    val.classList.add("design-next");
    cnt++;
    if(cnt>=arr.length)
    {
        cnt = 0;
        pic.src = arr[cnt];
    }
    else{
        pic.src = arr[cnt];
    }
}