# Resume

## SQL

Queries

Data usually are placed in columns and rows

CSV is a flat-file database

Lambda functions in Python can be usefull for tiny functions

Relational databases are databases implemented in softwares with more features, also managed by something like MySQL, Postregres...

SQL means Structured Query Language

Database file binary -> Database software/SQL interpreter -> GUI Interface/CLI

**C**reate - **R**ead - **U**pdate - **D**elete

SQL comum operations: CREATE, INSERT, SELECT, UPDATE, DELETE

Commands in SQL look like:

```sql
CREATE TABLE tablename(columname INT)
SELECT * FROM tablename
INSERT INTO tablename(columname) VALUES (valuename)
```
You can nest queries

Always normalize your data, eliminate redundances.

There is many data type in SQL like: BLOB, INTEGER, NUMERIC, TEXT, REAL...

Primary Key =  Original identifier
Foreign Key = Reference Identifier

Try to avoid SQL Injection Attacks, they are very common, always sanitize your data and keep your queries secure using better patterns.

SQL Reference: https://www.w3schools.com/sql/sql_ref_keywords.asp