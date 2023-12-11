// Función para obtener las cookies
function getCookie(name) {
    var cookieName = name + "=";
    var decodedCookie = decodeURIComponent(document.cookie);
    var cookieArray = decodedCookie.split(';');
    
    for (var i = 0; i < cookieArray.length; i++) {
      var cookie = cookieArray[i];
      
      while (cookie.charAt(0) == ' ') {
        cookie = cookie.substring(1);
      }
      
      if (cookie.indexOf(cookieName) == 0) {
        return cookie.substring(cookieName.length, cookie.length);
      }
    }
    
    return "";
  }
  
  // Función para establecer las cookies que quiera
  function setCookie(name, value) {
    document.cookie = name + "=" + value + ";";
  }
  
  // Función para crear un nuevo todo mediante un mensaje en la parte superior 

  function addTodo() {
    var todo = prompt("Añadir nuevo TO DO:");
    
    if (todo !== null && todo !== "") {
      var ftList = document.getElementById("ft_list");
      var newTodo = document.createElement("div");
      newTodo.innerHTML = todo;
      
      // Insertar el nuevo TO DO en la parte superior de la lista
      ftList.insertBefore(newTodo, ftList.firstChild);
      
      // Guardar la lista de TO DOs en una cookie
      var todos = ftList.innerHTML;
      setCookie("todos", todos);
    }
  }
  
  // Cargar la lista de TO DOs desde la cookie al cargar la página
  window.onload = function() {
    var ftList = document.getElementById("ft_list");
    var todos = getCookie("todos");
    
    if (todos !== "") {
      ftList.innerHTML = todos;
    }
  }
  
  // Eliminar un TO DO al hacer clic en él
  document.addEventListener("click", function(event) {
    var ftList = document.getElementById("ft_list");
    var target = event.target;
    
    if (target.tagName.toLowerCase() === "div") {
      var confirmDelete = confirm("¿Deseas eliminar este TO DO?");
      
      if (confirmDelete) {
        ftList.removeChild(target);
        
        // Guardar la lista de TO DOs actualizada en una cookie especifica 
    
        var todos = ftList.innerHTML;
        setCookie("todos", todos);
      }
    }
  });