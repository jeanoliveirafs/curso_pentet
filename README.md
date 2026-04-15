# 🔐 Pentest — Ethical Hacking & Security Scripts

> **EN** | [🇧🇷 Versão em Português](#-sobre-o-repositório)

A collection of Python and C scripts developed during professional penetration testing studies. Contains tools for network scanning, enumeration, brute-force testing, and information gathering — for **educational and authorized testing purposes only**.

[![Python](https://img.shields.io/badge/Python-3.x-3776AB?style=for-the-badge&logo=python&logoColor=white)](https://python.org)
[![C](https://img.shields.io/badge/C-Language-A8B9CC?style=for-the-badge&logo=c&logoColor=white)](https://en.wikipedia.org/wiki/C_(programming_language))
[![License](https://img.shields.io/badge/License-MIT-blue?style=for-the-badge)](LICENSE)

> ⚠️ **Disclaimer:** These scripts are for **educational purposes only**. Only use them on systems you own or have explicit permission to test. Unauthorized use is illegal.

---

## 🛠️ Scripts Overview

| Script | Description |
|--------|-------------|
| `enumftp3.py` | FTP service enumeration and banner grabbing |
| `goohack.py` | Google dorking automation for OSINT gathering |
| `grabbing.py` | Service banner grabbing across open ports |
| `scanrede2.c` | Low-level network scanner written in C |
| `smtpbrute-enum.py` | SMTP user enumeration via brute-force |
| `smtpenum.py` | SMTP service enumeration and user discovery |

---

## 🎯 Topics Covered

- 🌐 **Network Scanning** — Port discovery and service fingerprinting
- 📧 **SMTP Enumeration** — Mail server user enumeration techniques
- 🔍 **OSINT** — Open-source intelligence gathering with Google Dorks
- 📡 **Banner Grabbing** — Service version detection
- 🔑 **Brute Force** — Credential testing methodologies

---

## 🚀 Getting Started

```bash
# Clone the repository
git clone https://github.com/jeanoliveirafs/Pentest.git
cd Pentest

# Install Python dependencies
pip install -r requirements.txt

# Run a script (example)
python enumftp3.py --target 192.168.1.1 --port 21
```

---

## 🛡️ Ethical Use

All scripts in this repository were developed for:
- ✅ Learning and understanding security vulnerabilities
- ✅ Authorized penetration testing engagements
- ✅ CTF (Capture The Flag) competitions
- ✅ Lab environments and practice setups

❌ **Never use these tools on systems without explicit written permission.**

---

## 📚 Learning Resources

- [OWASP Testing Guide](https://owasp.org/www-project-web-security-testing-guide/)
- [Offensive Security (OSCP)](https://www.offensive-security.com/)
- [TryHackMe](https://tryhackme.com/)
- [HackTheBox](https://www.hackthebox.com/)

---

## 📄 License

MIT License — for educational use.

---

## 🇧🇷 Sobre o Repositório

**Pentest** é uma coleção de scripts Python e C desenvolvidos durante estudos de penetration testing profissional. Contém ferramentas para escaneamento de redes, enumeração, testes de brute-force e coleta de informações — **apenas para fins educacionais e testes autorizados**.

> ⚠️ **Aviso:** Estes scripts são apenas para fins educacionais. Use-os somente em sistemas que você possui ou tem permissão explícita para testar.

### 🛠️ Scripts

| Script | Descrição |
|--------|-----------|
| `enumftp3.py` | Enumeração de serviço FTP |
| `goohack.py` | Automação de Google Dorks para OSINT |
| `grabbing.py` | Captura de banners de serviços |
| `scanrede2.c` | Scanner de rede em baixo nível (C) |
| `smtpbrute-enum.py` | Enumeração SMTP via brute-force |
| `smtpenum.py` | Enumeração de usuários SMTP |

### 🎯 Tópicos Abordados

- 🌐 **Escaneamento de Redes** — Descoberta de portas e fingerprinting
- 📧 **Enumeração SMTP** — Técnicas de enumeração em servidores de email
- 🔍 **OSINT** — Coleta de inteligência com Google Dorks
- 📡 **Banner Grabbing** — Detecção de versões de serviços
- 🔑 **Brute Force** — Metodologias de teste de credenciais

### 🛡️ Uso Ético

- ✅ Aprendizado e compreensão de vulnerabilidades
- ✅ Testes de penetração autorizados
- ✅ Competições CTF
- ✅ Ambientes de laboratório

---

<p align="center">Made with 🔐 by <a href="https://github.com/jeanoliveirafs">Jean Oliveira</a></p>
