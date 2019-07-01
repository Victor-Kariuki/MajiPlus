# MAJI PLUS 🛀

> This is a water management system write & developed as a C++ cli application.

## Prerequisites

- C++ v11
- C++ mysql db connector

## Tools

- MYSQL - Database
- VSCode - IDE

## Installation

```bash
  make || g++ -o build/main src/main.cpp
  .\build\main
```

## Features

- Authentication module (Login | Sign Up).
- User profile with views of personal details & payment history.
- Billing based on user's consumption.

## Backlog

- A user can **register** with their personal details (*firstname | lastname | email | phone number | ID Number | Meter No | password*)
- Once a user register's a **registeration number** is generated and given to them.
- A user can now **login** with their email/phone_no & passsword.
- A user can **read & update** their personal details, the user can also view their **billing history** & **current balance**.
- A user can also make payments.
- An admin can create & update the **billing categories** and schemes.
- An admin can enter customer's **unit readings**.

## Tasks

- [ ] Create a User class to define authentication.

### Authors 🖊

- Victor Kariuki <karizvic@gmail.com>
- Alex Kimani <kymalex@gmail.com>
