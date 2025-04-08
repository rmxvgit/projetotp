# projetotp
projetos/laboratórios de técnicas de programação

## lab1 (implementação da classe UsrCode):
A classe UsrCode armazena um código numérico de cinco dígitos (0-9).
Dentro da classe, o código é armazenado na variável "code_number" do tipo uint_32.

### Interfaçe da classe:

#### Construtor "UsrCode()":
Cria um objeto da classe UsrCode a partir de um número ou um dígito.

##### Exemplo de uso:

```
  UsrCode code = UsrCode("45");
  UsrCode code2 = UsrCode(45);

  cout << code.getNum() << endl;
  cout << code2.getNum() << endl;

  // resultado esperado:
  // > 45
  // > 45
```

#### Métodos "getNum()" e "getStr()":
Retorna o código de cinco dígitos em formato numérico e de string, respectivamente.

##### Exemplo de uso:

```
  UsrCode code = UsrCode(25);

  cout << code.getNum() << endl;
  cout << code.getStr() << endl;

  // resultado esperado:
  // > 25
  // > 00025
```


#### Método "set()":
Redefine o código de cinco dígitos. O método aceita um número ou string como parâmetro.

##### Exemplos de uso:

Exemplo de uso com número:
```
  UsrCode code = UsrCode(25);

  code.set(45);

  cout << code.getNum() << endl;

  // resultado esperado:
  // > 45
```

Exemplo de uso com string:
```
  UsrCode code = UsrCode(25);

  code.set("100");

  cout << code.getNum() << endl;

  // resultado esperado:
  // > 100
```

#### Operadores de comparação (==):
Compara dois códigos. Aceita comparações com tipos numéricos, string, e outros objetos UsrCode.

##### Exemplo de uso:

```
  UsrCode code = UsrCode(25);
  UsrCode code2 = UsrCode(25);
  UsrCode code3 = UsrCode(45);

  cout << (code == code2) << endl;
  cout << (code == code3) << endl;

  // resultado esperado:
  // > 1
  // > 0
```
