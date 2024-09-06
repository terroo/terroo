#include "socials.hpp"

Socials::Socials(const std::string s) : m_cpp(s){
  m_https = "https";
  m_cutt  = "cutt";
  m_link  = {};
}

void Socials::set_socials(){
  m_adresses = {
    "44z9rw8","a4z9syS","74z9mOl","D4z94IU",
    "l4z9fWH","https://youtu.be/XdZlSfVLlsE","l4z9lrI","l4z9vrC",
    "d4z9ASb","S4z9XQo","h4z9FN1"
  };

  m_socials = {
    "Youtube", "Discord", "GitHub", "Facebook",
    "Reddit", "Twitter", "Pinterest", "Tumblr",
    "VK", "TikTok", "Twitch"
  };

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
