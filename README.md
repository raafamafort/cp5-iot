# Projeto de Disruptive Architecture - Checkpoint 5

## Demonstração do Projeto


https://github.com/raafamafort/cp5-iot/assets/101189058/e7b3bfcd-4c6f-4404-b592-dc5279cc4354



Este repositório contém um protótipo de projeto de Disruptive Architecture baseado em Arduino. O objetivo do projeto é acender uma luz ao encostar um cartão NFC específico. Este README fornecerá informações sobre o problema identificado, como o projeto utiliza IoT (Internet of Things), os resultados esperados, as principais dificuldades previstas, instruções de instalação, dependências e exemplos de como utilizar e reproduzir o projeto.

## Problema Identificado

O problema identificado é a necessidade de criar um sistema de controle de iluminação baseado em autenticação por cartões NFC específicos. Isso pode ser aplicado em contextos de segurança, controle de acesso ou até mesmo como parte de um sistema de automação residencial.

## Solução com IoT

Para resolver esse problema, utilizamos a tecnologia IoT, mais especificamente, o Arduino, para controlar a iluminação em resposta à autenticação por cartões NFC específicos. A autenticação é feita lendo os dados do cartão NFC e, se corresponderem aos cartões autorizados, a luz é acesa.

## Resultados Esperados

Os resultados esperados do projeto incluem:

- Capacidade de autenticar cartões NFC específicos.
- Controle de iluminação em resposta à autenticação bem-sucedida.
- Registro de eventos de autenticação.

## Principais Dificuldades Previstas

Alguns dos desafios que enfrentamos ao desenvolver este projeto incluem:

- Garantir a segurança do sistema para evitar falsificações ou acessos não autorizados.
- Lidar com diferentes tipos de cartões NFC e leitores.
- Implementar um registro eficiente dos eventos de autenticação.

## Instruções

### Dependências

- Arduino IDE (ou plataforma de desenvolvimento Arduino equivalente)
- Leitor de cartão NFC compatível
- Módulo de controle de iluminação (LED, relé, etc.)

### Instalação

1. Clone este repositório: `git clone https://github.com/seu-usuario/seu-repo.git`
2. Abra o projeto na Arduino IDE.
3. Carregue o código para o seu Arduino.
4. Conecte o leitor de cartão NFC e o módulo de controle de iluminação ao Arduino conforme o esquema fornecido.

### Exemplo de Uso

Aqui está um exemplo simples de como usar o sistema:

1. Aproxime um cartão NFC autorizado ao leitor.
2. A luz se acenderá se o cartão for válido.

## Equipe

Claudio Roberto - rm95340
David Augusto - rm93429
Lucas Amadeu - rm94539
Rafal Mafort - rm95699
Vitor Mantovani - rm92875

Este é um projeto de Disruptive Architecture que aborda um problema real usando IoT.

