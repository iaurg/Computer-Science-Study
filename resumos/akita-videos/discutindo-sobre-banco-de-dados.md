# Discutindo sobre Banco de Dados - Dos primórdios a Big Data

[Video](https://www.youtube.com/watch?v=Bfm3Ms2cTg0)

> Tudo que você não sabe como realmente funciona, vira superstição

> O seu trabalho como programador é encontrar o teto máximo de recursos que realmente precisam ser utilizados da máquina

> Sempre monitore o que está acontecendo com o seu sistema

> Toda manutenção deve usar métricas

O banco de dados mais rudimentar pode ser uma array guardando os valores em memória, porém em algum momento esta memória vai chegar em seu limite e o caminho natural de avanço é gravar esses dados em disco, sendo inicialmente um arquivo de texto que pode ser lido e escrito.

Nunca faça busca em banco de dados olhando registro a registro, é a pior solução, foque em ter um índice.

Todo indice tem um tradeoff, é mais rapido mas custa mais espaço em disco, e a atualização desse indíce terá o seu peso...

Não existem bancos de dados SQL, existem bancos de dados que entendem SQL.

Cuidando com comandos que armazenam muito recurso de memória e processamento, como o `SELECT * FROM` que pode trazer uma quantidade enorme de dados desnecessários. Tente buscar formas otimizadas de trabalhar com os dados que possui, toda operação tem um custo.

Se tem um loop no cliente para fazer uma busca no banco de dados, você está fazendo algo errado. Reflita seu código.

Se você não consegue medir, com certeza não consegue concertar

Cuidado com two-phase commit

Evite auto_increment, principalmente o sequencial, pois pode gerar problemas de segurança, pois é fácil de prever o próximo valor. É mais arriscado em casos que você expõe essa informação para o usuário, como um código de pedido.

## Estudar sobre

Database Indexes
Árvores Balanceadas
Árvores BTree
Transações ACID (DB)
SQLite3
Constraints
CAP Theorem
Graceful degradation
Surrogate keys
Consistent Hashing

## Links

[ Dynamo: Amazon’s highly available key-value store ](https://www.amazon.science/publications/dynamo-amazons-highly-available-key-value-store)
