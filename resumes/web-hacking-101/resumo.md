# WEB Hacking 101

Estou lendo este livre pelo simples fato de achar a área de segurança interessante, e como é necessário conhecer para se defender torna-se um conhecimento útil. Encontrei este livro no HackerOne por indicação do STÖK.

Site de treino: [Juice Shop](https://juice-shop-br.herokuapp.com)

### Links:

[https://pt.coursera.org/specializations/cyber-security](https://pt.coursera.org/specializations/cyber-security)

[https://www.torontowebsitedeveloper.com/](https://www.torontowebsitedeveloper.com/)

### ⛏️Useful Tools

- [https://gchq.github.io/CyberChef/](https://gchq.github.io/CyberChef/) - Decoder

Notes WEB 101:

> Learn by doing.
> Hack responsibly.
> Um bom hacking é uma combinação de observação e habilidades.
> Seja criativo quando estiver hackeando, pense fora da caixa.

Nomes:

- Samy Kamkar
- Kevin Mitnick
- Barnaby Jack

### Open Redirect Vulnerabilities

Alguns sites utilizam redirecionamento através da url para encaminhar o usuário a algum lugar, uma página, um exemplo ou algum item especifico. É possível modificar esses valores e verificar se o servidor faz algum tratamento nesses valores, caso não sejam tratados eles podem ser modificados e enviar o usuário para qualquer página/url que quiser sem que o usuário perceba.

Os parâmetros de redirecionamento nem sempre terão um nome obvio com ?redirect=, então vale tentar. Caso o parâmetro encaminhe para uma url interna, tente utilizar caracteres especiais como , ou @ para ver o que retorna

Quando estiver buscando por vulnerabilidades sempre busque por serviços terceiros que um site possa estar utilizando, eles podem criar novos vetores de invasão. As vezes a empresa que está sendo invadida pode não concordar com a sua solução, então você precisa criar provas para deixar de acordo.

Este tipo de vulnerabilidade acontece por causa do excesso de confiança, posi a vitima acessa o site do atacante ao achando que tinha acessado pelo site confiável

### HTTP Parameter Pollution

Essa invasão funciona manipulando os parâmetros http que são enviados ou recebidos pelo site, podem realizar alterações tanto no back como front. Neste tipo de ataque você não sabe como o código é processado no servidor, você apenas solicita uma informação e recebe uma resposta, o HPP consiste em enviar uma informação inesperada e receber uma resposta inesperada, é preciso trabalhar em cima dessa "caixa preta" para receber e testar o que o servidor está executando.

Muitas aplicações ficam vulneráveis apenas com poluição de HTTP, sempre esteja atento a como isto é utilizado.

Normalmente quando um site está vulnerável com HPP provavelmente terão várias rotas com o mesmo problema.

HPP é muito mais tentativa e erro para tentar adivinhar o que o servidor faz com seu código.

### Cross Site Request Forgery (CSRF)

CSRF é a interceptação de requisições através de outros sites, você é capaz de fazer uma requisição utilizando os cookies ou sessões guardadas no browser e utilizar para enviar requisições através de outros sites.

Requisições GET nunca podem realizar alterações/atualizações no backend, caso façam é uma possivel ameaça de CSRF.

Para fazer CSRF com POST precisa de mais configurações e passar alguns headers para conseguir acesso, as vezes o CORs pode barrar, mas existem formas de passar por ele.

Se um site estiver usando token CSRF tente remove-lo ou alterar para ver se o servidor está validando este dado

### HTML Injection

É uma forma de invasão onde você pode manipular a tratativa do site em relação ao HTML recebido fazendo com que sejam inseridos elementos HTML manipulados dentro do site.

Existe o HTML Injection Stored, quando o servidor salvar as informações do HTML e sempre retorna para o browser as alterações injetadas.

E tem o HTML Injection Reflected que aparece apenas uma vez a alteração para o usuário final.

### CRLF Injection

%0d%0a (quebra linha e retorna) este comando alerta a requisição para pular uma linha (terminar linha) e injetar o próximo conteúdo em um header dentro da requisição. Pode ser utilizado para enviar requisições GET por exemplo e "sequestrar" os tokens que o usuário está utilizando sem que ele perceba. É um ataque do tipo "injeção" onde dados são enviados para o servidor e alteram de alguma forma o comportamento esperado de retorno ou execução.

Preste atenção em sites que aceitam seu input como parte da requisição e retorna dados baseados nisso, particularmente se setarem cookies. Se for feito por uma requisição GET será necessário menos iteração da vítmia no ataque.

Preste sempre atenção em como encoded characters podem ser utilizados principalmente em requisições, encontre outras formas como %250D ou caracteres de 3 bytes para enganar alguns validadores, pense fora do comum.

## Cross-Site Scripting

XSS ocorre quando sites executam caracteres especiais sem sanitiza-los, o que faz o browser executar códigos JavaScript que não deveriam ser executados. Os caracteres normalmente incluem ("), (') e (<>). Esses são caracteres especiais pois são utilizados no html para indicar inicio e fim de instruções. Por exemplo, caso um site não sanitize esse tipo de caracter você é capaz de enviar um script via input e fazer com que o site responda com um alert informando algo.

Nem sempre é possivel fazer algo com XSS, é necessário validar alguns outros fatores antes de ser considerado uma vulnerabilidade útil. Por exemplo um site que não utiliza a flag httpOnly em cookies sensíveis pode ser bem mais explorado do que um site que utiliza. Outro fator a se considerar em XSS é a proteção SOP (Same Origin Policy) dos navegadores que impossibilita um site trafegar requisições de um site para outro (origens diferentes) sem as devidas permissões.

Uma forma inicial de validar um XSS é tentando executar o comando alert(document.domain) para confirmar a origem de onde está sendo executado o comando.

Caso você não tenha acesso ao envio de informações de script via submit você pode tentar a técnica de aspas em value de input por exemplo, digamos que um input seja `<input type="text" name="username" value="hacker">` você pode enviar o valor de `hacker" onfocus=alert(document.cookie) autofocus "` isso irá "fechar" seu value de hacker e injetar um script com autofocus (o auto focus é uma instrução que informa o navegador a focar este input e executar o código)

- (XSS Cheatsheet bypass)[https://github.com/masatokinugawa/filterbypass/wiki/Browser's-XSS-Filter-Bypass-Cheat-Sheet]
- (The misunderstood X-XSS-Protection)[https://blog.innerht.ml/the-misunderstood-x-xss-protection/]
