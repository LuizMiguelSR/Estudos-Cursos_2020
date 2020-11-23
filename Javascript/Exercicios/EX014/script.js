function carregar() {
    var msg = window.document.getElementById('msg')
    var img = window.document.getElementById('imagem')
    var data = new Date() 
    var hora = data.getHours()
    //ar hora = 8
    msg.innerHTML = `Agora são ${hora} horas.`
    if (hora >= 0 && hora < 12) {
        //Bom dia!
        img.src='manha.png'
        document.body.style.background = '#daccad'
    } else if (hora >= 12 && hora <= 18) {
        //Boa tarde!
        img.src='tarde.png'
        document.body.style.background = '#b5b9ba'
    } else {
        //Boa noite
        img.src='noite.png'
        document.body.style.background = '#463754'
    }
}
