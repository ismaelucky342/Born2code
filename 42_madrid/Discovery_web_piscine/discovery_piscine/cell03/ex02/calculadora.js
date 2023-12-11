function calcular() {
    var numero1 = parseInt(document.getElementById("numero1").value);
    var operador = document.getElementById("operador").value;
    var numero2 = parseInt(document.getElementById("numero2").value);
    
    if (isNaN(numero1) || isNaN(numero2)) {
      alert("Error :(");
      return;
    }
    
    var resultado;
    
    switch (operador) {
      case "+":
        resultado = numero1 + numero2;
        break;
      case "-":
        resultado = numero1 - numero2;
        break;
      case "*":
        resultado = numero1 * numero2;
        break;
      case "/":
        if (numero2 === 0) {
          alert("It's over 9000!");
          console.log("It's over 9000!");
          return;
        }
        resultado = numero1 / numero2;
        break;
      case "%":
        if (numero2 === 0) {
          alert("It's over 9000!");
          console.log("It's over 9000!");
          return;
        }
        resultado = numero1 % numero2;
        break;
      default:
        alert("Operador inválido");
        return;
    }
    
    alert("El resultado es: " + resultado);
    console.log("El resultado es: " + resultado);
  }