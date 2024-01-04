function changePage(pageNumber) {
    // Oculta todas las páginas
    var pages = document.querySelectorAll('.page');
    pages.forEach(function (page) {
        page.classList.remove('show');
    });

    // Muestra la página seleccionada
    var selectedPage = document.getElementById('page' + pageNumber);
    if (selectedPage) {
        selectedPage.classList.add('show');
    }
}
