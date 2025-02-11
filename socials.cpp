#include "socials.hpp"

Socials::Socials(const std::string s) : m_cpp(s){
  m_https = "https";
  m_cutt  = "cutt";
  m_link  = {};
  std::cout << "" << '\n';
}

void Socials::set_socials(){
  m_adresses = {};

  m_socials = {};

  m_icons = {
    "▶️ ", "🎮", "🐱", "📚", "👽", "🐦", "🎨",
    "🚀", "🧢", "🎵", "🎈"
  };
}
void Socials::get_socials(){
  this->set_socials();


  for (size_t i {}; i < m_adresses.size(); ++i) {
    std::string lower = m_socials[i];
    std::transform(lower.begin(), lower.end(), lower.begin(), [](unsigned char c){ 
      return std::tolower(c); 
    });
    m_link = m_icons[i] + ' ' + m_socials[i] + 
    ':' + ' ' + m_https + "://" + m_cutt + ".ly/" 
    + m_adresses[i];
    if(m_cpp.empty()){
      std::printf("%s\n", m_link.c_str());
    }else if(
        m_cpp == m_socials[i] ||
        m_cpp == lower || 
        m_cpp == m_socials[i].substr(0, 3) || 
        m_cpp == lower.substr(0, 3)){
      std::printf("%s\n", m_link.c_str());
    }
  }
}
