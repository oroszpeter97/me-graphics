#version 330 core
out vec4 FragColor;

in vec2 TexCoords;
in vec3 Normal;
in vec3 FragPos;

uniform sampler2D texture_diffuse1;
uniform vec3 lightDir; // Directional light direction
uniform vec3 lightColor; // Directional light color
uniform vec3 viewPos; // View position for specular calculation

void main()
{
    // Ambient lighting
    vec3 ambient = 0.1 * lightColor;

    // Diffuse lighting
    vec3 norm = normalize(Normal);
    float diff = max(dot(norm, normalize(-lightDir)), 0.0);
    vec3 diffuse = diff * lightColor;

    // Specular lighting
    vec3 viewDir = normalize(viewPos - FragPos);
    vec3 reflectDir = reflect(normalize(lightDir), norm);
    float spec = pow(max(dot(viewDir, reflectDir), 0.0), 32);
    vec3 specular = spec * lightColor;

    // Combine results
    vec3 lighting = ambient + diffuse + specular;
    vec4 texColor = texture(texture_diffuse1, TexCoords);
    FragColor = vec4(lighting, 1.0) * texColor;
}

