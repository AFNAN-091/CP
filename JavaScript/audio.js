

//var len = document.querySelectorAll(".bt");
for(var i =0; i<2; i++)
{
     document.querySelectorAll(".bt")[i].addEventListener("click",function(){
        var text = this.innerHTML;
        console.log(text);
        m(text);
    });
}


function m(text)
{
    switch(text)
    {
        case "Music 1":
            var audio = new Audio("sound/a.mp3");
            audio.play();
            break;
        case "Music 2":
            var audio = new Audio("sound/b.mp3");
            audio.play();
            break;
    }
}