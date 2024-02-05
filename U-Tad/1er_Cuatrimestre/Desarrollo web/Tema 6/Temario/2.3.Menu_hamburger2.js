document.getElementById('menu-icon').addEventListener('click', function () {
    var nav = document.querySelector('nav');
    nav.style.display = nav.style.display === 'block' ? 'none' : 'block';
});

document.getElementById('enviarBtn').addEventListener('click', function () {
    // Agrega aquí la lógica para manejar el evento de enviar el formulario
    alert('Formulario enviado');
});
