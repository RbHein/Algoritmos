from selenium import webdriver
from selenium.webdriver.common.keys import Keys

# Configurar o driver do Selenium
driver = webdriver.Chrome("C:\\Users\\heinr\\Área de Trabalho\\chromedriver_win32\\chromedriver.exe")

# Navegar até o portal
driver.get("https://xpconnect.xpi.com.br/Web/Connect/Conta/Login?ReturnUrl=%2fWeb%2fConnect%2f#mundoXp")  # Substitua pela URL do portal

# Realizar o login
campo_usuario = driver.find_element_by_name("username")  # Substitua pelo nome do campo de usuário
campo_usuario.send_keys("seu_nome_de_usuario")

campo_senha = driver.find_element_by_name("password")  # Substitua pelo nome do campo de senha
campo_senha.send_keys("sua_senha")

campo_senha.send_keys(Keys.RETURN)

# Navegar até o menu específico
menu = driver.find_element_by_xpath("//ul[@id='menu']//li[3]")  # Substitua pelo caminho XPath do menu específico
menu.click()

# Automatizar a tarefa
# Faça as ações necessárias para automatizar a tarefa dentro do menu específico, usando as funções do Selenium

# Encerrar o driver do Selenium
driver.quit()
